





void study()
{
	//���ù��
	if (1)
	{
		/*
			1.���ù��λ�ã�
				���ܣ�ʹ��������ۼ��
				Ҫ�㣺
						1.printf���ڹ��λ�ÿ�ʼ�����ӡ
						2.�տ�ʼ����������ϲ࣬��ӡ��֮�󣬹���Զ��ڴ�ӡ������ݺ���һ�������й۲⣩
						3.ʵ�ʹ����п���һ�����ò���
						3.��һ��API���� SetConsoleCursorPosition();	��windows.h��ͷ�ļ� 
								1.��1�����ڴ��ھ������2��һ���ṹ�壨ϵͳ������ˣ�
						4.��ȡ�����GetStdHandle(STD_OUTPUT_HANDLE) 
								1.GetStdHandle		��ȡϵͳ���
								2.STD_OUTPUT_HANDLE �����������	
						5.�ṹ�壺
								1.��ԱΪ���� ���У�������� x  y�����Ǹ�ֵʱ��˳�� 
								2.��0��0�п�ʼ���������±�  0,0
		*/
	}
	//��Ϸ�������(��Ϸ������ʾ�Ŀ�)
	if (2)
	{
		/*
			���̣�
				1.printf ��� GotXY ��ӡ��*�� ����ʾ�����Ϸ�����Ϸ��
				2.��\t �������루\t Ĭ��8���ո��ڿ���̨��
				3.����ӡ ��Ϸ�� �Ĵ����װ�� Head������

				4.���弸���꣬��������ĳ������ڲ��ָ��ߵĵ�
				5.��ӡ��������forѭ������Ҫ��GotXYָ�����λ�ã���һ��ѭ���ڣ� �����޷�������ӡ
				6.�ڶ���ѭ�����жϲ���ӡ ��ɿ�������ַ������ѣ���Щ��֧�֣����лᱨ��
				7.if�жϵ�������������else�У�Ҫ�ÿո������ڲ������򲻳ɿ򣬶��Ǳ�����ӡ�ַ��ˣ���һ���ַ���Ӧ�����ո�
			���䣺
				1.system("pause>0");	//�������н�β��һ����ʾ����ʾ
				2.�һ���Ŀ--����--������--ϵͳ--��ϵͳ����Ϊδ���ã�����������ʾ��һ����Ϣ��
		*/	
	}
	//���Ҳ�С���ڵ���ʾ��Ϣ
	if (3)
	{
		/*
			���䣺
				1.Ҫ��һ���������飨��ʾ������ƶ���Χ��
				
			���̣�
				1.����һ���������飨�����ƶ��ķ�Χ������ǽ����հײ�����������
				2.�ڻ����ʱ�򣬾ͰѶ�Ӧx y �Ŀ�һ��ֵ������1 ����1��λ�þʹ���ǽ �հײ��ֵ�����x y ����� 0 �����հײ���
				3.�������������ң�������printf ��� GotXY ����ӡ��ʾ��Ϣ
				
		*/
	}
	//���������
	if (4)
	{
		/*
			���䣺
				1.���������㷨�������кܶ�
				2.��0~6���������ÿ�����ֶ�Ӧһ�ַ��飬�����������
				3.rand();	//ͷ�ļ���stdlib ����Ҫ���ӣ�����ֵ�� �����������һ����ϵͳʱ�䣬���������ظ�
				4.���ӣ�srand((unsigned int)time(NULL));	//�õ�ǰϵͳʱ����Ϊ���������  ��Ҫ time.h ͷ�ļ�  ��һ�ξ͹��ˣ��Ϳ���һֱ����rand
						srand��Ҫunsigned int�Ĳ�������time�ķ���ֵ�� time_t ������Ҫǿת
				5.�˴��㷨��win32�Ķ���˹�����㷨�������

			���⣺
				1.��Ϸ���ķ��飬����ɫ��δ��ط��飨���ƶ�������ɫ����ط���
				2.next ���飺����Ϸ��������غ󣬲����·��飬���²����������Ҳ�����ʾ���ķ���
				3.������Ϸһ��ʼ����ʼ״̬����Ϸ���ķ�����û�ж�Ӧ��next����ģ����ԱȽ����⣨��ʼ�����ɣ�
				4.��ʼ������Ϸһ��ʼ������Ϸ������ʾ�������趨һ�����顢Ȼ��Ͱ����й������ɷ��鼴��
				5.�����й������ɣ�������أ��²�������Ϊ��ʾ������

			���̣�
				1.��Ϸ��ʼ�����飺
						1.дһ���������ڲ���ʼ����Ϸ�����顢next����
						2.��ʼ����������rand�������0~6 ���Դ�����ͬ�ķ���
						3.��������ͷ������ srand����һ�Σ�rand�Ϳ����������
				2.�����й������ɣ�
						
				3.��������ʱ�ĳ�ʼλ�ü�״̬��
						1.����������ʱ��λ��,Ҫ���ݶ�Ӧ������ʲô����������ͬ�ķ��鶼ѡ����һ���̶�С������Ϊ��������
								���������ι涨�����½ǵ�С��Ϊ���ģ���ô����ʱ������ڶ����Ŀ����ڵ�2�У��� g_cHANG == 2 �������ǵ���ˮƽ���������ɵ�λ��
								��������ֻ��1�У������Ķ���2��
						2..�����ʼ״̬���ã�����������ת�ĽǶȳ��֣�ÿ����ת90�ȣ�����4��״̬����Ӧ 0 1 2 3
				4.��ʾ���������ɴ�ӡ��next����
						1.�ȶ���ñ��������涨next�����ӡ��λ�ã���������Ķ�������߼���
						2.�ж�next���������ַ���,Ȼ������ʾ����ӡ������next��
								��switch�ж�g_cNextSqure �����ַ���
						3.�������⣬����������next����ʱ���µĸ��Ǿɵģ��ɵĻ����ţ����´�ӡ��ͼ���ǲ���ʶ��
								ÿ��ִ��ǰ�ÿո񸲸ǵ��ɵļ��ɣ���ӡ�ո񸲸ǣ���ӡ�ո�λ�þ��Ƿ����ӡ���Ǹ���Χ��
				5.��Ϸ����ʼ�������ɴ�ӡ��������һ���ʼǣ���дλ��ʱ���ο���ʦ��ͼ�����൱���㣬һĿ��Ȼ��
					1.����һ�����κ���
					2.��switch ���ж����������ͷ���
					3.Ȼ���������͵�case�£���switch�ж�������״̬����ת״̬��
							1.��ͬ״̬ҲҪд��������ʱ��״̬ҲҪ���
					4.����ת״̬�µ�case�У���ӡ���飨ע�ⷽ��ռ2�ַ�������Ҫע���С��ֱ��ʹ��g_cHANG��g_cLIE����InitState���Ѿ��������Ͷ������Ϸ���������ĵ������λ���ˣ�
							1.ע�⣬���������Ѿ���InitState��������if���е��������ˣ��˴�����ֱ��ʹ��g_cHANG��g_cLIE ���ص��ĳ���ֻ��һ��
							2.����һ��Ҫ���룬���ܳ��ְ�������������ƶ�������⣨������2�ַ�Ϊ��λ��
					5.���ַ�������࣬���൱�򵥱�����������
				���䣺
					1.�����Ѳ�ͬ����Ĳ�ͬ״̬�ģ���ʼ���ɸ���ӡ��ע��λ��
					2.���о���������ɵķ���6���g_cHANG ��Ϊ1�������Ķ���2������InitState����
							���Ըı�switch��������ʱ������ֳ���������������/���ƣ�ԭ���ǣ�������ɵ����֣�����InitState�������ǳ�������ͨ����
							����������switch��6�����ԣ�������������ˣ���Ϊ������ɵ����ֲ���6���Ҿ�����InitState��g_cHANG����1������2
							���øı�ʲô�����Ǻ������ģ�������������ʱ���ж��������ǳ���������ȫ�ֱ���������������ɵ����ֶ�Ӧ�ķ����Ǻ�
		*/
	}
	//�����˶�
	if (5)
	{
		/*
			
			6.�����˶�����Ŀǰ����̫��������ΪSleep��������������иĶ���
					1.��������
							1.raw("  ");		//����ǰ���ո�����ɷ���ͼ��
							2.g_cHANG++; y���ԼӼ��ɣ����ɷ���ʱͳһʹ������
							3.Draw("��");	���·���λ�ã����ַ�������ʱ�Ѿ�ȷ������
							4.���������װ�ɺ���
							5.ѭ���е��ú�������Sleep����ʵ�ֿ��Ʒ��������ٶ� ������ĸ��д��
					2.������/���ƶ�
							1.�����ڲ��߼��� ���� ����
							2.��g_cHANG++; �滻�� g_cLIE++/-- �������ĵ���X����ƶ������鰴�����ĵ����ɴ�ӡ�ģ�
					3.�������벢�ж�
							1.�������룺��һ���첽������scanf��getchar��gets�ȶ���ͬ�������ģ�ִ���˾�һֱ�ȵ�����������¼�����
									GetAsyncKeyState(),����ֵ�������뷵��0���������0������ȥ�飬�к궨����Щ����
									����һЩ���壬���ǰ���״̬�ģ��������¡�������Ӧ��̧����Ӧ�ȣ�QTѧ��
							2.�ö��if���ж����ĸ��������루����else if ����Ϊֻ��ִ�м��һ�Σ����if��ͬʱ��⵽��
									���if��Ӱ��Ч�ʣ���������������β�Ӱ�죬��������Ҫ�Ż���
					4.������Σ�
							1.ԭ�����ı䷽�����ת״̬��־�������� g_cState
							2.��װ���κ�����
									1.Ҫ������ɷ���ͼ�� ���ô�ǰд�õ�Draw����
									2.��g_cState ��0~3 ֮��˳��仯�����ַ�ʽ��
							3.���κ����ڰ���������� �� �����ж��µ��ü���	
		*/
	}
	//�ƶ���������	(1.�߽� 2.����)
	if (6)
	{
		/*
			7.�ƶ��������ƣ����粻�ܳ���ǽ�����ײ���̶���
					1.�߽��жϷ�װ������
							1.������������1����ת״̬����2��3�����ĵ�����
							2.˫��switch����㣺��Ϸ�������ַ��飬�ڲ㣺ÿ�ַ����������ת״̬
							3.�ڲ��µ�ÿ��״̬��case�������ĵ�Ϊ��׼������ȫ�ֱ������жϷ����Ƿ������߽�
							4.�߽��ڱ��������ﶨ�����1����ά���飩�������жϷ����С������λ�õĶ�Ӧ����Ԫ���Ƿ�Ϊ1����֪���߽紥�����
							5.�����󣬺�������false
							6.ÿһ�������ÿһ��״̬��Ҫд�ж�
							7.���鵽�ױ�ɡ�ǽ�����������С���ӿ��ܳ����⣬�����ɵġ�ǽ������������ʡ�Ե�С����
					2.�ڰ��������У��ƶ������ñ߽��жϺ���
							ע�⣬��ʱ���Σ�Ҫ�����ĵ���һ���ƶ������꣨�൱��Ԥ�У����������˲Ų���ͨ������
							���⣺down ��down�����н����жϸ��ã���������ʽ��
			8.������������
					1.����������λ�ã���Ϊת�䷽����״��ת���ķ��������ǽ����ط����غϣ�������һ�����������κ���������ҡ������ƶ����ƶ������غ��򲻽��б���
					2.����ʱ���ǽ���Ԥ�У���������KeyState����ã�
					3.������������������ҡ����£����г�����Ϊ���ĵ����Ҳ��Գƣ��������ű�ᣬ�����غϣ�Ҫ�����ƶ�����
					4.ע�⣬���κ����Ҫ�ƶ�����Ҫ����ԭ��λ�õ�ͼ�Σ���Canchange���������Ѿ�д����
					5.����������ʦ�ṩ�ķ���������Ψһ����bug��ִ����Ȼ���޸�
		*/
	}
	//���鵽�ײ��ˣ������·���
	if (7)
	{
		/*
			�����·��飺
					1.��Down�н��е��ײ����ж�
					2.���ײ��ˣ��л��ɰ���next����˳�����ɷ��飨����NewSqure����Ȼ�����Draw("��")��ӡ
					3.Ȼ����ŵ���DrawNextSqure�����´�ӡnext���ķ���
					ע�⣺�����������е�����һ��Draw��ӡ��ʼ���飬����ѭ������������Down����Ļ��������������Ǵӵ�2�п�ʼ��ӡ��һ��
						���ǵģ�����Ϊ������ִ�п���̫���������ɾ�����������һ�񣬿����������ǵ�2�п�ʼ��һ��
					�������Sleep�ŵ�ѭ����ͷ����
			����ͣס��
					1.������Down�н��е��ײ����ж�
					2.�÷��鵽��ͣס֮�󣬱�ɫ������ƶ������ֿ�
					3.�÷����ɱ߽�һ���ġ�ǽ����ʹ�����ܶѻ����˹�����Ҫ�жϷ�������ࡢ��ת״̬��
					4.��3����װ�ɵ����ĺ��������ü���
							˫��switch����ÿ�ַ����ÿ��״̬�����ܱ�ɡ�ǽ����������λ�õı���������1��
					5.Down�еײ�����������ͣס����ɫ���ѻ�����Ҫ��NewSqure֮ǰ��ɣ���ΪNewSqure��ı�ȫ�ֱ��������²�������ı䣩		
		*/
	}
	//���еķ�Χ��÷�
	if (8)
	{
		/*
			���з�Χ��
				1.���˰����ķ����ǣ�������غ��Դ˷������ߡ������Ϊ��Χ�����ж��⼸���Ƿ�����
				2.�����ķ����У���Ϸ������ˢ���ж�֮��ģ������Լ���취
				3.���η�������ͬ�ķ���Ĳ�ͬ��״�ķ�Χ�ǲ�һ���ģ�һЩ���鷶Χ���غϣ�����շ������֪����
			�����жϣ�
				1.�жϾ���ĵ����У��Ƿ����ˣ���һ���������жϣ����˷���true
				2.Ȼ��ѭ�����жϷ�Χ�ڵ��Ǽ���
			���е÷֣�
				1.��Down�е���Score
				2.disappear�������У��������λ���Ƿ�׼ȷ�������������Ǳ����
		
		*/
	}
	//���к����䣬��ʾ����
	if (9)
	{
		//�����������裬��Fall������
		//1.�������¸�ֵ
		//2.���·���
		//3.ǰһ��λ��ȥ����

		//������������Լ�ϲ�����޸��������Ȼ�����
		//��ʾʱҲ������һ���㷨�÷���������ʾ
	}
	//��������ʱ�������ƶ���ø�����˿����ʱ��
	if (10)
	{
		//֮ǰд�ĳ�������ʱ����ƽ����ÿ����һ�β�ƽ��һ�Σ��Եúܽ�Ӳ�����45�����䣬����ƽ�ƣ�������������ͬ��
		//��������ǣ�����ʱ���ð����ж�����һ������� ���ִ��
		//����ʱ�������ò��������������˼��ܺ��ã��������Ը�˿������
		//�����ļ���Ҳ�ǰ���������ʣ�Ҳ���ԼӴ����á������ٵ�������ʱ����
	}
	//Game Over ����
	if (11)
	{
		//��һ���������ж��Ƿ��������Ϸ
		//�Ҹ��˼��˸�������ΪGame Over�Ķ��п��Ʊ���

		//��ʼ����Ϸ�������ж϶�һ��F2��Ȼ�����׼������ Init �Ϳ��Կ�ʼ����Ϸ��
	}
	//�����ٶ�
	if (12)
	{
		//���ٶȿɿأ����ǿ��ư����������ʱ���ʱ�����ñ�������
		// �����������ٶȼ�����ʾ�ٶȵ���Ϣ
	}
	//����BUG
	if (13)
	{
		//�������Ų��ţ���������Ҽ�����ס��һֱ�����ƶ�������̧��ʱҲ�з�Ӧ�����ܾ�׼����
		//ԭ���ǣ���ⰴ��ʱδָ������ɨ�跽ʽ��Ĭ�ϰ��£���ס��̧��ɨ��ʱ��һ�����⼸�����������������ɨ��
		//�����������ⰴ��ʱ��& 0x01 ����ָ��������ʱ(���¡���ס)����Ч����������MSDN��������������ʽ
	}
}