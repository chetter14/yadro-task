#ifndef TAPE_H
#define TAPE_H

template<size_t N>
class Tape
{
public:
	// �������� ������ �� ����� � ������ � ��
	void write(int value);
	int read();

	// �������� ����������� ����� ������ � �����
	void moveForward();
	void moveBack();
};

#endif	// TAPE_H