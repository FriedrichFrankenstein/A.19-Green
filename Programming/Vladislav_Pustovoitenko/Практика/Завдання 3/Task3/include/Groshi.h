#ifndef GROSHI_H
#define GROSHI_H


class Groshi
{
    public:
        Groshi(int grn, int cop);
        virtual ~Groshi();
        void InputFromKB();
		void InputFromFile(char* path);
		void OutputToScreen();
		void OutputToFile(char* path);
		Groshi operator + (Groshi sum);
		Groshi operator - (Groshi sum);
		int ToCop();
		void FromCop(int sum);

    protected:

    private:
};

#endif // GROSHI_H
