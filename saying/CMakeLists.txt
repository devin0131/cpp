CMAKE_MINIMUM_REQUIRED(VERSION 3.16.0)

aux_source_directory(./ SAYING_SRC)
add_library(devinsaying ${SAYING_SRC})
