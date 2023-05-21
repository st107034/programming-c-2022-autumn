#include <iostream>
struct Point
{
	int x;
	int y;
	
	Point(int x = 0, int y = 0) : x(x), y(y)
	{
	}

	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}

	~Point()
	{
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	int b = 0;
	int s1 = 0;
	int s2 = 0;

	std::cin >> n;

	Point** points = new Point * [n];
	
	for (int i = 0; i < n; i++)
	{
		points[i] = new Point;
	}

	for (int i = 0; i < n; i++)
	{
		std::cin >> points[i]->x >> points[i]->y;
	}

	for (int i = 0; i < n; i++)
	{
		b = 1;

		for (int j = 0; j < n - 1; j++)
		{
			s1 = points[i]->x * points[i]->x + points[i]->y * points[i]->y;
			s2 = points[i+1]->x * points[i+1]->x + points[i+1]->y * points[i+1]->y;

			if (s1 > s2)
			{
				std::swap(points[j]->x, points[j+1]->x);
				std::swap(points[j]->y, points[j+1]->y);
				b = 0;
			}
		}

		if (b == 1)
		{
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << points[i]->x << " " << points[i]->y << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete points[i];
	}

	delete[] points;

	return EXIT_SUCCESS;
}