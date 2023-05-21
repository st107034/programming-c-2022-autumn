#include <iostream>
struct Student
{
	std::string name;
	std::string family;
	int x;
	int y;
	int z;

	Student(std::string name = "",std::string family = "", int x = 0, int y = 0, int z = 0) : name(name),family(family),x(x), y(y),z(z)
	{
	}

	Student(const Student& s)
	{
		name = s.name;
		family = s.family;
		x = s.x;
		y = s.y;
		z = s.z;
	}

	~Student()
	{
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	int b = 0;
	double s1 = 0;
	double s2 = 0;

	std::cin >> n;

	Student** students = new Student * [n];

	for (int i = 0; i < n; i++)
	{
		students[i] = new Student;
	}

	for (int i = 0; i < n; i++)
	{
		std::cin >> students[i]->name >> students[i]->family >> students[i]->x >> students[i]->y >> students[i]->z;
	}

	for (int i = 0; i < n; i++)
	{
		b = 1;

		for (int j = 0; j < n - 1 - i; j++)
		{
			s1 = (students[j]->x + students[j]->y + students[j]->z)/3.0;
			s2 = (students[j+1]->x + students[j+1]->y + students[j+1]->z) / 3.0;

			if (s1 < s2)
			{
				std::swap(students[j]->name, students[j + 1]->name);
				std::swap(students[j]->family, students[j + 1]->family);
				std::swap(students[j]->x, students[j + 1]->x);
				std::swap(students[j]->y, students[j + 1]->y);
				std::swap(students[j]->z, students[j + 1]->z);
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
		std::cout << students[i]->name << " " << students[i]->family << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete students[i];
	}

	delete[] students;

	return EXIT_SUCCESS;
}