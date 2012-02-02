public class delete_sub_str {
	static int count_sub(char[] source, char[] sub) {
		int count = 0;
		int i = 0;
		int j = 0;
		int temp = 0;

		while (i < source.length) {
			temp = i;
			j = 0;
			while (temp < source.length && j < sub.length
					&& source[temp++] == sub[j++])
				;
			if (j == sub.length) {
				count++;
				i = temp;
			}
			i++;
		}

		return count;
	}

	static char[] delete_sub_str_method(char[] str, char[] sub_str) {
		char[] result_str = new char[str.length - sub_str.length];
		int i = 0;
		int j = 0;
		int index = 0, temp = 0;

		while (i < str.length) {
			temp = i;
			j = 0;
			while (temp < str.length && j < sub_str.length
					&& str[temp++] == sub_str[j++])
				;
			if (j == sub_str.length) {
				i = temp;
			}
			j = 0;
			while (temp < str.length && str[temp] != sub_str[j])
				temp++;
			while (i < temp)
				result_str[index++] = str[i++];
		}

		return result_str;
	}

	public static void main(String arg[]) {
		char[] sub = "fuck".toCharArray();

		System.out
				.println(delete_sub_str_method("12fuck345".toCharArray(), sub));

		System.out.println(delete_sub_str_method("12fuck".toCharArray(), sub));

		System.out.println((delete_sub_str_method(
				"12fuck345fuck678fuck9".toCharArray(), sub)));

		System.out.println(delete_sub_str_method("12fuck".toCharArray(), sub));

		System.out
				.println(delete_sub_str_method("12fuck345".toCharArray(), sub));

		System.out.println(delete_sub_str_method(
				"12fuck345fuck678fuck9".toCharArray(), sub));

		System.out.println(delete_sub_str_method(
				"12fuck345fuck678fuck9fuc".toCharArray(), sub));

		System.out.println(delete_sub_str_method(
				"12fck345fuck678fuck9fuc".toCharArray(), sub));

		System.out.println(count_sub("12fuck345fuck678fuck9fuc".toCharArray(),
				"fuck".toCharArray()));
		System.out.println(count_sub("12fuk345fuck678fuck9fuc".toCharArray(),
				"fuck".toCharArray()));

		/*
		 * 12345 12 3,123456789 12 12345 3,123456789 3,123456789fuc 3
		 */

	}
}
