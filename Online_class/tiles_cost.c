// A homeowner has a 1250-square-foot house with 3 rooms and wants to install floor tiles in all three rooms. The dimensions of the rooms are given below:

// Room 1: 18 feet × 15 feet

// Room 2: 16 feet × 14 feet

// Room 3: 14 feet × 12 feet

// Each tile measures 16 inches × 12 inches, and the tile installation cost is Tk. 22 per square foot. Write a C program to calculate and display the total installation cost for each room separately. Finally, display the overall installation cost for all three rooms.
#include <stdio.h>

int main()
{
    int length[3] = {18, 16, 14};
    int width[3] = {15, 14, 12};

    int area, cost, tiles, total_tiles = 0, total_cost = 0;
    float tiles_area = (16 / 12) * (12 / 12);

    for (int i = 0; i < 3; i++)
    {
        area = length[i] * width[i];

        cost = area * 22;

        // printf("Room %d cost: %d\n", i + 1, cost);

        tiles = area / tiles_area;

        printf("Room %d tiles: %d\n", i + 1, tiles);

        total_tiles = total_tiles + tiles;

        total_cost = total_cost + cost;
    }

    // printf("Total cost: %d\n", total_cost);
    printf("Total tiles: %d\n", total_tiles);

    return 0;
}

// int main()
// {
//     int room1_l = 18, room1_w = 15, room2_l = 16, room2_w = 14, room3_l = 14, room3_w = 12;

//     int area_room1 = room1_l * room1_w;
//     int area_room2 = room2_l * room2_w;
//     int area_room3 = room3_l * room3_w;

//     int cost_room1 = area_room1 * 22;
//     int cost_room2 = area_room2 * 22;
//     int cost_room3 = area_room3 * 22;

//     printf("Room -1 cost : %d\n", cost_room1);
//     printf("Room -2 cost : %d\n", cost_room2);
//     printf("Room -3 cost : %d\n", cost_room3);

//     int total_cost = cost_room1 + cost_room2 + cost_room3;
//     printf("Total cost : %d\n", total_cost);
// }