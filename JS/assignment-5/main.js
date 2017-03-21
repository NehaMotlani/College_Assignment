// var helper = function(x)
// {
// 	return x;
// }

var composition = function (f,g)
{
	return function (x)
	{
		return f(g(x));
	} 
}

var nthPowerFunc = function (f,n)
{
	return function(x)
	{
		var temp =x;
		for(var i=0;i<n;i++)
		{
			temp = f(temp);
		}
		return temp;
	}
}

// var composeFunctionsInArray = function(ls)
// {
// 	return function(x){
// 		var temp =x;
// 		for(var i=0;i<ls.length;i++)
// 		{
// 			if(!Number.isInteger(ls[i]))
// 			{
// 				temp = ls[i](temp);
// 			}
// 		}
// 		return temp;
// 	}
// }

var composeFunctionsInArray = function(ls)
{
		var fil = function(a)
		{
			if(typeof a ==="function")
				return a;
			else
				return;
		}
		var r = ls.filter(fil).reduce(composition);
		return r
}

var average = function(ls)
{
	var add = function(a,b)
	{
		return a+b;
	}
	var temp = ls.reduce(add,0);
	return temp/(ls.length);
}

var averageMoreThanX = function(l,x)
{
	var g = function(a)
	{
		if(a>=x)
			return a;
	}
	var r=l.filter(g);
	var av=average(r);
	return av;
}


var moreThanK = function(ls,k)
{
	var g = function(a)
	{
		if(a>=k)
			return a;
	}
	var f = function(a,b)
	{	
	return ++a;
	}

	ls = ls.filter(g);
	var a=ls.reduce(f,0);
	//console.log(a);
	return a;
}

var moreThanKArr = function(ls1,ls2)
{
	
	var ls=ls2.map(function(x)
		{
			return moreThanK(ls1,x);
		}
		)
	return ls;
}

var createCounter =function()
{
	var f = function()
		{
			return ++f.counter;
		};
		f.counter = -1;
		return f;
}

module.exports.composition = composition;
module.exports.nthPowerFunc = nthPowerFunc;
module.exports.composeFunctionsInArray =
composeFunctionsInArray; module.exports.average = average;
module.exports.averageMoreThanX = averageMoreThanX;
module.exports.moreThanK = moreThanK;
module.exports.moreThanKArr = moreThanKArr;
module.exports.createCounter = createCounter;
