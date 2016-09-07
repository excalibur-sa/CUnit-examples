#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
       if(CU_initialize_registry()){
                fprintf(stderr, " Initialization of Test Registry failed. ");
                exit(1);
        }else{
                AddTests();
                CU_set_output_filename("TestMax");
                CU_list_tests_to_file();
                CU_automated_run_tests();
                CU_cleanup_registry();
        }
        return 0;
}