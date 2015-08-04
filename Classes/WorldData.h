#include <string>

class WorldData {
  public:
	WorldData();

	WorldData(int randSeed);

	WorldData(std::string path);

	virtual ~WorldData();

	void generate(int x, int y);

	void save();
};
