#include"boss.h"


//构造函数
Boss:: Boss(int id, string name, int did)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptId = did;

}
//显示个人信息
void Boss::ShowInfo()
{
	cout << "职工编号：  " << this->m_ID
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位名称：" << this->getDeptName()
		<< "\t职工职责：管理公司所有事务" << endl;

}
//获取岗位名称
string Boss::getDeptName()
{
	return "总裁";
}