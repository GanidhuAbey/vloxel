#pragma once

#include <core/window.hpp>

namespace Vloxel
{

namespace Editor
{

class VloxelEditor
{
private:
	VloxelEditor() = default;
	static VloxelEditor m_instance;

	Core::Window m_game_window;
public:
	~VloxelEditor() = default;
	VloxelEditor(const VloxelEditor&) = delete;

	static VloxelEditor& get()
	{
		return m_instance;
	}

	void run();

	void set_window(Core::Window&& m_game_window);
};

}

}