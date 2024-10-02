#ifndef TAPE_H
#define TAPE_H

#include <string>
#include <fstream>

class Tape
{
public:
	// ���� (�����) file, ����� ����� N, ���������������� ���� configFile
	Tape(const std::string& file, size_t N, const std::string& configFile);

	// �������� ������ �� ����� � ������ � ��
	void write(int value);
	int read();

	// �������� ����������� ����� ������ � �����
	void moveForward();
	void moveBack();

private:
	std::fstream _file;
};

#endif	// TAPE_H