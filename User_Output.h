#pragma once
namespace OpenAvrilConcurrency
{
	class User_Output
	{
	public:
		User_Output();
		virtual ~User_Output();
		class Object* dyn_CLASS_get_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseID);
		void dyn_REG_boot1_DEFINE_User_Output(class Framework_Server* obj);
		void dyn_REG_boot2_SUBSTANTIATE_User_Output(class Framework_Server* obj);
		void dyn_REG_boot3_INITIALISE_User_Output(class Framework_Server* obj);
		void dyn_REG_boot4_INSTANTIATE_User_Output(class Framework_Server* obj);
		static void stat_CLASS_boot0_DECLAIRE_User_Output();
		static void stat_CLASS_boot1_DEFINE_User_Output();
		static void stat_CLASS_boot3_INITIALISE_User_Output();
		static void stat_CLASS_boot4_INSTANTIATE_User_Output();
		static void stat_REG_boot0_DECLAIRE_User_Output();
	private:
		static class Praise0_Output* _stat_CLASS_ptr_Praise0_Output;
		static std::list<class Object*>* _REG_ptr_List_Of_List_Of_PraiseOutputSubset;
		static void stat_CLASS_boot1_DEFINE_Praise0_Output();
		static void stat_CLASS_boot3_INITIALISE_Praise0_Output();
		static class Praise0_Output* stat_CLASS_get_ptr_Praise0_Output();
		static void stat_REG_boot1_DEFINE_List_Of_PraiseOutputSubset();
		static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseOutputSubset();
		static void stat_REG_boot3_INITIALISE_List_Of_PraiseOutputSubset(class Framework_Server* obj);
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseOutputSubset();
	};
}