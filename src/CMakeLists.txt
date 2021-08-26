file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/../include/ph_data_structures/*.hpp")


foreach(file ${HEADER_LIST})
    source_group (TREE ${CMAKE_CURRENT_LIST_DIR}/../include/ph_data_structures
        PREFIX "include"               
        FILES  ${file}
    )
endforeach()


file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/*.cpp")

foreach(file ${SOURCE_LIST})
    source_group (TREE ${CMAKE_CURRENT_LIST_DIR}
        PREFIX "src"               
        FILES  ${file}
    )
endforeach()



add_library (ph_data_structures
	${SOURCE_LIST}  ${HEADER_LIST} 
	# ALIAS ph_data_structures::ph_data_structures
)

set_target_properties (
	ph_data_structures 

	PROPERTIES
  		CXX_STANDARD 20
  		CXX_STANDARD_REQUIRED ON
  		CXX_EXTENSIONS OFF

	FOLDER
		""
)
# Make override a feature requirement only if available
target_compile_features (ph_data_structures 
	PUBLIC
  		$<$<COMPILE_FEATURES:cxx_override>:cxx_override>
)
# Define the foo_OVERRIDE symbol so it provides the
# override keyword if available or empty otherwise
target_compile_definitions (ph_data_structures 
	# PUBLIC
  	# 	$<$<COMPILE_FEATURES:cxx_override>:-Dph_data_structures_OVERRIDE=override>
  	# 	$<$<NOT:$<COMPILE_FEATURES:cxx_override>>:-Dph_data_structures_OVERRIDE>

	PRIVATE 
		"$<$<CONFIG:DEBUG>:DEBUG> $<$<CONFIG:RELEASE>:RELEASE>"
)


# target_compile_definitions (lib PRIVATE "$<$<CONFIG:DEBUG>:DEBUG> $<$<CONFIG:RELEASE>:RELEASE>")


# target_sources (ph_concepts PRIVATE in/platform.hpp)

set_target_properties (ph_data_structures PROPERTIES CXX_STANDARD 20)
target_compile_features (ph_data_structures PUBLIC cxx_std_20)

ph_precompile (TARGET ph_data_structures PRIVATE PCH ${std_pch})

# add_library (ph_data_structures ALIAS ph_data_structures::ph_data_structures)
# target_link_libraries (lib PRIVATE    ${Vulkan_LIBRARIES} glfw)
# target_link_libraries (lib PRIVATE ph_data_structures)

target_include_directories (ph_data_structures PUBLIC ph_file ${CMAKE_PROJECT_SOURCE_DIR}/include ph_concepts)
target_link_libraries (ph_data_structures PUBLIC ph_concepts)

# target_include_directories (ph_concepts PRIVATE ${Boost_INCLUDE_DIRS})

target_compile_features (ph_data_structures PUBLIC cxx_std_20)

# target_compile_options(ph_concepts PUBLIC "-ast-dump  -fsyntax-only")


target_include_directories(ph_data_structures PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include/ph_data_structures>
    $<INSTALL_INTERFACE:include/ph_data_structures>
)

target_include_directories(ph_data_structures PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include>
    $<INSTALL_INTERFACE:include>
)

if (PROJECT_NAME STREQUAL PROJECT_NAME)
    # set_target_properties (lib PROPERTIES FOLDER "lib/")
else ()
    set_target_properties (ph_data_structures PROPERTIES FOLDER "dependencies/ph_data_structures")
endif ()



# IDE()