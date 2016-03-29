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
	std::string			line_str;			// 인덱스 지우기용 임시 변수
	CCharacter			temp_char;
	CItem				temp_item;


	char ch;


	file.open("CharacterDB.csv");

	if (!file.is_open())
	{
		cout << " 캐릭터 파일 열기 실패" << endl;
		std::abort();
	}
	

	file >> line_str;	// 인덱스 항목 지우기

	//캐릭터 데이터 파싱 작업
	while (!file.eof()) {

		file >> temp_char.m_index >> ch >> temp_char.m_level >> ch >> temp_char.m_grade >> ch >> temp_char.m_hp >> ch
			>> temp_char.m_att >> ch >> temp_char.m_def >> ch >> temp_char.m_speed >> ch >> temp_char.m_name;
		
		temp_char.m_name = temp_char.m_name.substr(0, temp_char.m_name.size()-1);
		

		if (file.eof())
			break;

		m_Character_list.push_back(temp_char);

	}


	file.close();

	cout << "캐릭터DB 로드 완료"<< endl;





	file.open("ItemDB.csv");

	if (!file.is_open())
	{
		cout << " 아이템 파일 열기 실패" << endl;
		std::abort();
	}

	file >> line_str;	// 인덱스 항목 지우기

	int temp_item_index, temp_item_type, temp_item_subtype, temp_item_value = { 0 };
	std::string temp_item_name = { 0 };

	//아이템 데이터 파싱 작업
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
	
	cout << "아이템DB 로드 완료" << endl;
}