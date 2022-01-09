/*
1041. Robot Bounded In Circle
*/
bool isRobotBounded(char * instructions){
	char *p = instructions;
	int g[4] = {0,};
	int i = 0;
	int l = 0;
	int r = 0;
	int dir = 0;
	while (*p != '\0')
	{
		if (*p == 'G')
			++g[i];
		else if (*p == 'L')
		{
			++l;
			i = (i + 1) % 4;
		}
		else if (*p == 'R')
		{
			++r;
			i = ((3 + i)) % 4;
		}
		++p;
	}
	dir = l < r ? r - l : l - r;
	if (g[0] == g[2] && g[1] == g[3])
		return (true);
	if (dir % 4 != 0)
		return (true);
	return (false);
}