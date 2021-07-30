

cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project (example1)

add_executable(example1 src/main.cpp)


message ("Hello all!")

set (x "Mr Thomas" )


message ("His name is " ${x})

set (y 1)

if (${y}) 
	message ("good")
else()
	message ("bad")
endif()

foreach (z RANGE 10)
	message (${z})
endforeach()

function ( print N1)
	message (${N1} + 8_)
endfunction()

macro (print2 N)
	message (${N})
	endmacro()
	
	

print(888)

print2(44)
