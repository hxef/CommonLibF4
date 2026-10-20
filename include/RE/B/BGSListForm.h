#pragma once

#include "RE/B/BSContainer.h"
#include "RE/B/BSTArray.h"
#include "RE/T/TESForm.h"

namespace RE
{
	// A script's AddForm puts a form at the end of arrayOfForms, or a
	// reference's or a created form's ID in scriptAddedTempForms, and counts
	// both kinds in scriptAddedFormCount. Reverting the list drops the temp
	// forms and the last of arrayOfForms the count leaves.
	class __declspec(novtable) BGSListForm :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSListForm };
		static constexpr auto VTABLE{ VTABLE::BGSListForm };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kFLST };
		static constexpr auto TYPE_ID{ BSScript::kFormList };

		void AddScriptAddedForm(TESForm* a_form)
		{
			using func_t = decltype(&BGSListForm::AddScriptAddedForm);
			static REL::Relocation<func_t> func{ ID::BGSListForm::AddScriptAddedForm };
			return func(this, a_form);
		}

		[[nodiscard]] bool ContainsItem(const TESForm* a_form) const noexcept
		{
			return GetItemIndex(*a_form).has_value();
		}

		void ForEachForm(std::function<BSContainer::ForEachResult(TESForm*)> a_callback) const
		{
			for (const auto& form : arrayOfForms) {
				if (form && a_callback(form) == BSContainer::ForEachResult::kStop) {
					return;
				}
			}
			if (scriptAddedTempForms) {
				for (const auto& addedFormID : *scriptAddedTempForms) {
					const auto addedForm = TESForm::GetFormByID(addedFormID);
					if (addedForm && a_callback(addedForm) == BSContainer::ForEachResult::kStop) {
						return;
					}
				}
			}
		}

		[[nodiscard]] std::optional<std::uint32_t> GetItemIndex(const TESForm& a_item) const noexcept
		{
			if (scriptAddedTempForms) {
				const auto it = std::find(
					scriptAddedTempForms->begin(),
					scriptAddedTempForms->end(),
					a_item.formID);
				if (it != scriptAddedTempForms->end()) {
					return static_cast<std::uint32_t>(it - scriptAddedTempForms->begin());
				}
			}

			const auto it = std::find(
				arrayOfForms.begin(),
				arrayOfForms.end(),
				&a_item);
			if (it != arrayOfForms.end()) {
				const auto base = scriptAddedTempForms ? scriptAddedTempForms->size() : 0;
				return base + static_cast<std::uint32_t>(it - arrayOfForms.begin());
			}

			return std::nullopt;
		}

		// The forms the plugins and DLL mods put in the list, without what a
		// script's AddForm put there.
		[[nodiscard]] std::span<TESForm* const> GetOwnForms() const noexcept
		{
			const std::uint32_t temps = scriptAddedTempForms ? scriptAddedTempForms->size() : 0;
			const std::uint32_t added = scriptAddedFormCount > temps ? scriptAddedFormCount - temps : 0;
			const std::uint32_t size = arrayOfForms.size();
			return { arrayOfForms.data(), size > added ? size - added : 0 };
		}

		// members
		BSTArray<TESForm*>       arrayOfForms;          // 20
		BSTArray<std::uint32_t>* scriptAddedTempForms;  // 38
		std::uint32_t            scriptAddedFormCount;  // 40
	};
	static_assert(sizeof(BGSListForm) == 0x48);
}
