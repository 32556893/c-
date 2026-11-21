#include "Student.h"
float ave_score(struct Student stu) //计算平均成绩
{
	float sum = 0;
	for (int i = 0;i < 5;i++)
	{
		sum += stu.scores->scores[i];
	}
	return sum / 5;
}