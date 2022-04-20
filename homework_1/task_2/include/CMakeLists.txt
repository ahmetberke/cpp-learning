add_library(ipb_arithmetic ../src/sum.cpp ../src/subtract.cpp)

install(TARGETS ipb_arithmetic DESTINATION lib)
install(FILES ipb_arithmetic.hpp DESTINATION include)
