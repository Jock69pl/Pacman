#pragma once
//widh and height must be odd
#define mapWidth 21
#define mapHeight 21
#define spacing 2.0

struct GameState {
	float pacmanPosX = 0.0f, pacmanPosZ = 0.0f;
	int **map;
	int **map_tiles;
};
