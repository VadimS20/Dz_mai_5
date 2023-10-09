# CMakeList.txt: проект CMake для task_5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task_5 "task_5.cpp" "task_5.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task_5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
