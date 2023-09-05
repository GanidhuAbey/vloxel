// vloxel.cpp : Defines the entry point for the application.
//

#include <editor/editor.hpp>

int main()
{
	auto& editor = Vloxel::Editor::VloxelEditor::get();

	editor.set_window(Vloxel::Core::Window(800, 600, "test"));
	editor.run();

	while (true)
	{

	}
}
