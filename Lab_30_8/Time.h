#ifndef TIME_H__
#define TIME_H__
class Time{
	private:
	int hours;
	int minutes;
	int seconds;

	public:
	Time();
	~Time();
	Time(int hours, int minutes, int seconds);
	int getH();
	int getM();
	int getS();
	void setH(int hours);
	void setM(int minutes);
	void setS(int seconds);
};
#endif
