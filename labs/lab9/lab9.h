#define SIZE 5

void initializeImage(int image[SIZE][SIZE]);
int drawPixel(int image[SIZE][SIZE], int row, int col);
void invertImage(int image[SIZE][SIZE]);
int flipRow(int image[SIZE][SIZE], int row);
int flipColumn(int image[SIZE][SIZE], int col);
void clearImage(int image[SIZE][SIZE]);
void displayImage(int image[SIZE][SIZE]);