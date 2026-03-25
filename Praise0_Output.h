#pragma once
namespace OpenAvrilConcurrency
{
	class Praise0_Output
	{
	public:
		Praise0_Output();
		virtual ~Praise0_Output();
		class Object* dyn_CLASS_getr_Item_On_List_Of_ptr_PraiseOutputSubsets(uint8_t praiseID);
		void dyn_REG_boot1_DEFINE_Praise0_Output(class Framework_Server* obj);
		void dyn_REG_boot2_SUBSTANTIATE_Praise0_Output(class Framework_Server* obj);
		void dyn_REG_boot3_INITIALISE_Praise0_Output(class Framework_Server* obj);
		void dyn_REG_boot4_INSTANTIATE_Praise0_Output(class Framework_Server* obj);
		double dyn_REG_get_output_Value();
		void dyn_REG_set_output_Value(double newValue);
		static void stat_CLASS_boot0_DECLAIRE_Praise0_Output();
		static void stat_CLASS_boot1_DEFINE_Praise0_Output();
		static void stat_CLASS_boot3_INITIALISE_Praise0_Output();
		static void stat_CLASS_boot4_INSTANTIATE_Praise0_Output();
		static void stat_REG_boot0_DECLAIRE_Praise0_Output();
	private:
		static double* _REG_ptr_output_Value;
		void stat_REG_boot1_DEFINE_output_Value();
		void stat_REG_boot2_SUBSTANTIATE_output_Value();
		void stat_REG_boot3_INITIALISE_output_Value();
		static double* stat_REG_get_ptr_output_Value();
		static void stat_REG_set_Item_output_Value(double newValue);
	};
}