#pragma once

class CItem
{
private:

	//열거형
	enum class item_type	{	equipment = 1,	accessories,	jewelry };		// 아이템 타입 열거형(1:장비, 2 : 장신구, 3 : 보석)
	enum class item_subtype	{ weapon = 1, armor };								// 아이템 세부타입 열거형(1:무기, 2 : 방어구)
	
	//데이터 멤버
	int m_item_index;														// 아이템 인덱스
	std::string m_item_name;												// 아이템 이름
	item_type m_item_type;													// 아이템 타입
	item_subtype m_item_subtype;											// 아이템 세부타입(1:무기, 2 : 방어구)
	int m_item_value;														// 아이템 실제수치(공격력, 방어력 등)

public:

	// get 함수
	std::string		get_item_name()		{ return m_item_name; }
	item_type		get_item_type()		{ return m_item_type; }
	item_subtype	get_item_subtype()	{ return m_item_subtype; }
	int				get_item_value()	{ return m_item_value; }
	int				get_item_index()	{ return m_item_index; }

	// set 함수
	void			set_item_name(const std::string item_name)			{ m_item_name = item_name; }
	void			set_item_type(const item_type item_type)			{ m_item_type = item_type; }
	void			set_item_type(const int item_type)					{ m_item_type = static_cast<CItem::item_type>(item_type); }
	void			set_item_subtype(const item_subtype item_subtype)	{ m_item_subtype = item_subtype; }
	void			set_item_subtype(const int item_subtype)			{ m_item_subtype = static_cast<CItem::item_subtype> (item_subtype); }
	void			set_item_value(const int item_value)				{ m_item_value = item_value; }
	void			set_item_index(const int item_index)				{ m_item_index = item_index; }

	// 생성자 및 소멸자
	CItem();
	~CItem(void);
};

