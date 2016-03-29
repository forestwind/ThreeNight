#include "stdafx.h"
#include "DataBase.h"

using std::cout;
using std::endl;

CDataBase::CDataBase()
{

}


CDataBase::~CDataBase()
{
}

void CDataBase::init()
{
	std::ifstream		file;
	std::string			line_str;			// �ε��� ������ �ӽ� ����
	CCharacter			temp_char;
	CItem				temp_item;


	char ch;


	file.open("CharacterDB.csv");

	if (!file.is_open())
	{
		cout << " ĳ���� ���� ���� ����" << endl;
		std::abort();
	}
	

	file >> line_str;	// �ε��� �׸� �����

	//ĳ���� ������ �Ľ� �۾�
	while (!file.eof()) {

		file >> temp_char.m_index >> ch >> temp_char.m_level >> ch >> temp_char.m_grade >> ch >> temp_char.m_hp >> ch
			>> temp_char.m_att >> ch >> temp_char.m_def >> ch >> temp_char.m_speed >> ch >> temp_char.m_name;
		
		temp_char.m_name = temp_char.m_name.substr(0, temp_char.m_name.size()-1);
		

		if (file.eof())
			break;

		m_Character_list.push_back(temp_char);

	}


	file.close();

	cout << "ĳ����DB �ε� �Ϸ�"<< endl;





	file.open("ItemDB.csv");

	if (!file.is_open())
	{
		cout << " ������ ���� ���� ����" << endl;
		std::abort();
	}

	file >> line_str;	// �ε��� �׸� �����

	int temp_item_index, temp_item_type, temp_item_subtype, temp_item_value = { 0 };
	std::string temp_item_name = { 0 };

	//������ ������ �Ľ� �۾�
	while (!file.eof()) {

		file >> temp_item_index >> ch >> temp_item_type >> ch >> temp_item_subtype >> ch >> temp_item_value >> ch >> temp_item_name;
		
		temp_item.set_item_index(temp_item_index);
		temp_item.set_item_type(temp_item_type);
		temp_item.set_item_subtype(temp_item_subtype);
		temp_item.set_item_value(temp_item_value);
		temp_item.set_item_name(temp_item_name);

		if (file.eof())
			break;

		m_Item_list.push_back(temp_item);

	}
	
	cout << "������DB �ε� �Ϸ�" << endl;
}