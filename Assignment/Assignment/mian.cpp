#include<stdio.h>

//問題１		

//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはpublicで作成し、外部で値を設定して、
//値が表示されることを確認してください。


struct Mondai
{
private:

public:

	int x;
	int y;

};

int main()
{
	int x, y;
	
	int x = 2;
	int y = 4;

	printf("x = %lf\ny = %lf\n", x, y);

	return 0;
}

//問題２

//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。


struct vector2
{
private:
	int x;
	int y;

public:
	void Getvector2(double x, double y);

	double GetVecX() { return x; }
	double GetVecY() { return y; }
};

int main()
{
	vector2 vector;

	vector.Getvector2(5, 6);

	printf("x = %lf\ny = %lf\n", vector.GetVecX(), vector.GetVecY());

}


/// 第３問
/// x, y, z座標を持つ構造体Vector3を
/// 作ってください。
/// x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
/// 値が表示されることを確認してください。
struct  Mondai3
{
public:
	void setX(int x)
	{
		vec3_x = x;
	}
	void setY(int y)
	{
		vec3_y = y;
	}
	void setZ(int z)
	{
		vec3_z = z;
	}
	int getX()
	{
		return vec3_x;
	}
	int getY()
	{
		return vec3_y;
	}
	int getZ()
	{
		return vec3_z;
	}
private:
	int vec3_x;
	int vec3_y;
	int vec3_z;
};
int main()
{
	Mondai3 md3;
	md3.setX(2);
	md3.setY(2);
	md3.setZ(2);
	printf_s("kd2: %d, %d", md3.getX(), md3.getY(), md3.getZ());
}
