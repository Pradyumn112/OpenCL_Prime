#define CL_ENABLE_EXCEPTIONS //enable exceptions
#include<CL/cl2.hpp> //to include cl files
#include<cstdio> // for c i/o
#include<iostream> //for cpp i/o
#include<vector> //cpp vector type

cl::Buffer d_A, d_B;
cl::Context context(CL_DEVICE_TYPE_DEFAULT); // to set device type default
cl::CommandQueue queue(context); // to seup command queue
cl::Program program(context,util::loadProgram("prime.cl"),true);//to add kernel file in program

std::vector<float>h_A(), h_B();//defining two vectors of float type

d_A = cl::Buffer(context, h_A.begin(), h_A.end(), true);
d_B = cl::Buffer(context,CL_MEM_WRITE_ONLY,sizeof(float) );

cl::EnqueueArgs(queue, cl::NDRange(N, N)),N, d_A, d_B);
cl::copy(queue, d_C, h_C.begin(), h_C.end());





