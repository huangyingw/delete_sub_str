public class delete_sub_str {
	static char[] delete_sub_str_method(char[] str, char[] sub_str) {
		char[] result_str = new char[str.length - sub_str.length];
		int count = 0;
		int i = 0, j = 0;
		int index = 0;
		while (str[i] != sub_str[j])
			i++;
		for (int k = 0; k < i; k++) {
			result_str[index++] = str[k];
		}

		while (i < str.length) {
			while (i < str.length && j < sub_str.length
					&& str[i++] == sub_str[j++])
				;
			if (i < str.length)
				count++;
			j = 0;
			while (i < str.length && str[i] != sub_str[j]) {
				result_str[index++] = str[i++];
			}
		}
		return result_str;
	}

	static int count_sub(char[] source, char[] sub) {
		int result = 0;
		int i = 0, j = 0;
		while (i < source.length) {
			j = 0;
			while (source[i++] != sub[j])
				;
			i--;
			while (i < source.length && j < sub.length
					&& source[i++] == sub[j++])
				;
			if (j < sub.length) {
				result++;
			}
		}
		return result;
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

		System.out.println(count_sub("12fuck345fuck678fuck9fuc".toCharArray(),
				"fuck".toCharArray()));
		/*
		 * 12345 12 3,123456789 12 12345 3,123456789 3,123456789fuc 3
		 */

	}
}
