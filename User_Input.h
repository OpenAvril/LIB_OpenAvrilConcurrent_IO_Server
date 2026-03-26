#pragma once
namespace OpenAvrilConcurrency
{
	class User_Input
	{
	public:
		User_Input();
		virtual ~User_Input();
		class Object* dyn_CLASS_get_Item_On_List_Of_ptr_PraiseInputSubsets(uint8_t praiseID);
		void dyn_REG_boot1_DEFINE_User_Input(class Framework_Server* obj);
		void dyn_REG_boot2_SUBSTANTIATE_User_Input(class Framework_Server* obj);
		void dyn_REG_boot3_INITIALISE_User_Input(class Framework_Server* obj, uint8_t praiseId);
		void dyn_REG_boot4_INSTANTIATE_User_Input(class Framework_Server* obj);
		static void stat_CLASS_boot0_DECLAIRE_User_Input();
		static void stat_CLASS_boot1_DEFINE_User_Input();
		static void stat_CLASS_boot3_INITIALISE_User_Input();
		static void stat_CLASS_boot4_INSTANTIATE_User_Input();
		static void stat_REG_boot0_DECLAIRE_User_Input();
	private:
		static class Praise0_Input* _stat_CLASS_ptr_Praise0_Input;
		static std::list<class Object*>* _REG_ptr_List_Of_List_Of_PraiseInputSubset;
		static void stat_CLASS_boot1_DEFINE_Praise0_Input();
		static void stat_CLASS_boot3_INITIALISE_Praise0_Input();
		static class Praise0_Input* stat_CLASS_get_ptr_Praise0_Input();
		static void stat_REG_boot1_DEFINE_List_Of_PraiseInputSubset();
		static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseInputSubset();
		static void stat_REG_boot3_INITIALISE_List_Of_PraiseInputSubset(class Framework_Server* obj, uint8_t praiseId);
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseInputSubset();
	};
}