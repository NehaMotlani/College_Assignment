var fifthDay = function()
{
	var days = ["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"];
	var i = new Date().getDay();
	i = (i + 5)%7;
	return days[i];
};

var altSpaceToUnderscore = function(s)
{
	s = s.trim();
	var c=0;
	var i=0;
	for(i=0;i<s.length;i++)
	{
		if(s[i]===" ")
		{
			c++;
			if(c%2===0)
			{
				s[i]="_";
			}
		}
	}
	return s;
};

var interestingSort = function(s)
{
	var result1="";
	var result2="";
	var i = 0;
	for(i=0;i<s.length;i++)
	{
		if(s[i]>='a' && s[i]<='m')
			result1 += s[i];
		else
			result2 += s[i];
	}
	result1.split("").sort().join("")
	//result1 = result1.sort();
	result1 = result1 + result2;
	return result1;
};

var getMeNextFirst = function(s)
{
	s = s.trim();
	var i=0;
	for(i=0;i<s.length;i++)
	{
		if(s[i]==" ")
		{
			var temp = s[i+1];
			s[i]=s[i+1];
			s[i+1]=" ";
		}
	}
	return s;
};

module.exports.fifthDay = fifthDay;
module.exports.altSpaceToUnderscore = altSpaceToUnderscore;
module.exports.interestingSort = interestingSort;
module.exports.getMeNextFirst = getMeNextFirst;
