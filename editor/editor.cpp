#include <editor/editor.hpp>
#include <iostream>


namespace Vloxel
{

namespace Editor
{

VloxelEditor VloxelEditor::m_instance;

void VloxelEditor::run()
{
	m_game_window.run();
}

void VloxelEditor::set_window(Core::Window&& window)
{
	m_game_window = window;
}

}

}