Задание по программированию: Очередь

	Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец 
	и уходить оттуда. Более того, иногда некоторые люди могут прекращать и начинать 
	беспокоиться из-за того, что очередь не продвигается.

	Реализуйте обработку следующих операций над очередью:
	
		* WORRY i: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
		* QUIET i: пометить i-го человека как успокоившегося;
		* COME k: добавить k спокойных человек в конец очереди;
		* COME -k: убрать k человек из конца очереди;
		* WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
	
	Изначально очередь пуста.