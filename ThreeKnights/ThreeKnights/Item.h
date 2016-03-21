#pragma once

class CItem
{
private:

	//������
	enum class item_type	{	equipment,	accessories,	jewelry };		// ������ Ÿ�� ������(1:���, 2 : ��ű�, 3 : ����)
	enum class item_subtype	{ weapon, armor };								// ������ ����Ÿ�� ������(1:����, 2 : ��)
	
	//������ ���
	std::string m_item_name;												// ������ �̸�
	item_type m_item_type;													// ������ Ÿ��
	item_subtype m_item_subtype;											// ������ ����Ÿ��(1:����, 2 : ��)
	int m_item_value;														// ������ ������ġ(���ݷ�, ���� ��)

public:

	// get �Լ�
	std::string		get_item_name();
	item_type		get_item_type();
	item_subtype	get_item_subtype();
	int				get_item_value();

	// set �Լ�
	void			set_item_name(const std::string item_name);
	void			set_item_type(const item_type item_type);
	void			set_item_subtype(const item_subtype item_subtype);
	void			set_item_value(const int item_value);


	// ������ �� �Ҹ���
	CItem(const std::string item_name, const item_type item_type, const item_subtype item_subtype, const int item_value);
	~CItem(void);
};

