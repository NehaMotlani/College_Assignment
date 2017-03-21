var sb=document.getElementById("students-body");
var generate_cell=function(content)
{
	var cell=document.createElement("td");
	cell.innerText=content;
	return cell;
}

for(name in students)
{
	marks=students[name];
	var student=document.createElement("tr");
	student.appendChild(generate_cell(name));
	for(var i=0;i<marks.length;i++)
	{
		student.appendChild(generate_cell(marks[i]));
	}
	sb.appendChild(student);
}

var getHighestMarks=function(data)
{
	var max=-1;
	var max_name=[];
	for(name in data)
	{
		marks=data[name];
		add=function (x,y){return x+y;}
		sum=marks.reduce(add);
		if(sum>max)
		{
			max=sum;
			max_name=name;
		}
	}
	return max_name;
};

var getSubject2Toppers=function(data)
{
	var max=-1;
	var marks=data[name];
	var max_name=[];
	for(name in data)
	{
		if(data[name][1]>max)
		{
			max=data[name][1];
			max_name.push(name);
		}
	}
	return max_name.sort();
};
var getSubjectAverage=function(data)
{
	var avg=[];
	for(var i=0;i<5;i++)
	{
		var total=0;
		var j=0;
		for(name in data)
		{
			marks=data[name];
			total+=marks[i];
			j++;
		}
		avg.push(total/j);
	}
	return avg;
};
var getAbove=function(data,value)
{
	var grade=[];
	for(name in data)
	{
		marks=data[name];
		total=0;
		for(var i=0;i<marks.length;i++)
			total+=marks[i];
		if(total/5 > value)
			grade.push(name);
	}
	return grade.sort();
};
module.exports.getHighestMarks=getHighestMarks;
module.exports.getSubject2Toppers=getSubject2Toppers;
module.exports.getSubjectAverage=getSubjectAverage;
module.exports.getAbove=getAbove;
