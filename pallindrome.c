
int main()
{
	char s[100];
	int l,i;
	printf("enter string");
	gets(s);
	l=strlen(s);
	for( i=0;i<l;i++)
	{
		if (s[i] == s[l-i-1])
		{
			printf("YES");
			break;
		}
		else
		{
			printf("NO");
			break;
		}
	}
	return 0;
}
