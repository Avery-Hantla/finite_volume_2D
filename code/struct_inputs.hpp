#ifndef STRUCT_INPUTS_HPP
    #define STRUCT_INPUTS_HPP
    #include <iostream>
    struct struct_inputs{
        int order; 
        bool islimiteron;
        int nmax; 
        int monitor_step;
        int output_step;
        int restart;

        // Grid
        std::string grid_file; 

        // Equation
        int eqn;
        int flux_solver;
    };
#endif