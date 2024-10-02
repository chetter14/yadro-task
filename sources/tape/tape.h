#ifndef TAPE_H
#define TAPE_H

#include <string>
#include <fstream>

class Tape
{
public:
	// Файл (лента) file, длина ленты N, конфигурационный файл configFile
	Tape(const std::string& file, size_t N, const std::string& configFile);

	// Операции записи на ленту и чтения с неё
	void write(int value);
	int read();

	// Операции перемещения ленты вперед и назад
	void moveForward();
	void moveBack();

private:
	std::fstream _file;
};

#endif	// TAPE_H