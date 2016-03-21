#pragma once

class CItem
{
private:

	//열거형
	enum class item_type	{	equipment,	accessories,	jewelry };		// 아이템 타입 열거형(1:장비, 2 : 장신구, 3 : 보석)
	enum class item_subtype	{ weapon, armor };								// 아이템 세부타입 열거형(1:무기, 2 : 방어구)
	
	//데이터 멤버
	std::string m_item_name;												// 아이템 이름
	item_type m_item_type;													// 아이템 타입
	item_subtype m_item_subtype;											// 아이템 세부타입(1:무기, 2 : 방어구)
	int m_item_value;														// 아이템 실제수치(공격력, 방어력 등)

public:

	// get 함수
	std::string		get_item_name();
	item_type		get_item_type();
	item_subtype	get_item_subtype();
	int				get_item_value();

	// set 함수
	void			set_item_name(const std::string item_name);
	void			set_item_type(const item_type item_type);
	void			set_item_subtype(const item_subtype item_subtype);
	void			set_item_value(const int item_value);


	// 생성자 및 소멸자
	CItem(const std::string item_name, const item_type item_type, const item_subtype item_subtype, const int item_value);
	~CItem(void);
};

