
struct Scores //成绩类型,用来存储学生成绩和考试类型以及时间
{
	enum exam
	{
	midterm,final
	}exam;
	float scores[5]; // math,english,c语言,体育,待定
};
struct Student //学生数据类型
{
	char id[16];
	char name[16];
	char major[50];
	struct Scores *scores;
	 int score_count;    // 当前有几条考试记录
    int score_capacity; // 当前成绩数组能放几条
};
float ave_score(struct Student stu);//计算平均成绩的函数