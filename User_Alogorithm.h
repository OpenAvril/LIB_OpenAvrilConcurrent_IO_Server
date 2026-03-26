#pragma once
namespace OpenAvrilConcurrency
{
	class User_Algorithim
	{
	public:
		User_Algorithim();
		virtual ~User_Algorithim();
		class Object* dyn_CLASS_get_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t praiseID);
		void dyn_REG_boot1_DEFINE_User_Algorithim(class Framework_Server* obj);
		void dyn_REG_boot2_SUBSTANTIATE_User_Algorithim(class Framework_Server* obj);
		void dyn_REG_boot3_INITIALISE_User_Algorithim(class Framework_Server* obj);
		void dyn_REG_boot4_INSTANTIATE_User_Algorithim(class Framework_Server* obj);
		static void stat_CLASS_boot0_DECLAIRE_User_Algorithim();
		static void stat_CLASS_boot1_DEFINE_User_Algorithim();
		static void stat_CLASS_boot3_INITIALISE_User_Algorithim();
		static void stat_CLASS_boot4_INSTANTIATE_User_Algorithim();
		static void stat_REG_boot0_DECLAIRE_User_Algorithim();
	private:
		static class Praise0_Algorithim* _stat_CLASS_ptr_Praise0_Algorithim;
		//todo.
		static std::list<class Object*>* _REG_ptr_List_Of_List_Of_PraiseAlogrithmSubset;
		static void stat_CLASS_boot1_DEFINE_Praise0_Algorithim();
		static void stat_CLASS_boot3_INITIALISE_Praise0_Algorithim();
		static class Praise0_Algorithim* stat_CLASS_get_ptr_Praise0_Algorithim();
		//todo.
		static void stat_REG_boot1_DEFINE_List_Of_PraiseAlogrithmSubset();
		static void stat_REG_boot2_SUBSTANTIATE_List_Of_PraiseAlogrithmSubset(class Framework_Server* obj);
		static void stat_REG_boot3_INITIALISE_List_Of_PraiseAlogrithmSubset(class Framework_Server* obj);
		static std::list<class Object*>* stat_REG_get_ptr_List_Of_PraiseAlogrithmSubset();
	};
}