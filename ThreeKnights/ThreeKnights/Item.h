#pragma once

class CItem
{
private:

	//������
	enum class item_type	{	equipment = 1,	accessories,	jewelry };		// ������ Ÿ�� ������(1:���, 2 : ��ű�, 3 : ����)
	enum class item_subtype	{ weapon = 1, armor };								// ������ ����Ÿ�� ������(1:����, 2 : ��)
	
	//������ ���
	int m_item_index;														// ������ �ε���
	std::string m_item_name;												// ������ �̸�
	item_type m_item_type;													// ������ Ÿ��
	item_subtype m_item_subtype;											// ������ ����Ÿ��(1:����, 2 : ��)
	int m_item_value;														// ������ ������ġ(���ݷ�, ���� ��)

public:

	// get �Լ�
	std::string		get_item_name()		{ return m_item_name; }
	item_type		get_item_type()		{ return m_item_type; }
	item_subtype	get_item_subtype()	{ return m_item_subtype; }
	int				get_item_value()	{ return m_item_value; }
	int				get_item_index()	{ return m_item_index; }

	// set �Լ�
	void			set_item_name(const std::string item_name)			{ m_item_name = item_name; }
	void			set_item_type(const item_type item_type)			{ m_item_type = item_type; }
	void			set_item_type(const int item_type)					{ m_item_type = static_cast<CItem::item_type>(item_type); }
	void			set_item_subtype(const item_subtype item_subtype)	{ m_item_subtype = item_subtype; }
	void			set_item_subtype(const int item_subtype)			{ m_item_subtype = static_cast<CItem::item_subtype> (item_subtype); }
	void			set_item_value(const int item_value)				{ m_item_value = item_value; }
	void			set_item_index(const int item_index)				{ m_item_index = item_index; }

	// ������ �� �Ҹ���
	CItem();
	~CItem(void);
};

