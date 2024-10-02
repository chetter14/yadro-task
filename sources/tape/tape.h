#ifndef TAPE_H
#define TAPE_H

template<size_t N>
class Tape
{
public:
	// Операции записи на ленту и чтения с неё
	void write(int value);
	int read();

	// Операции перемещения ленты вперед и назад
	void moveForward();
	void moveBack();
};

#endif	// TAPE_H