public class delete_sub_str {
	static int count_sub(char[] source, char[] sub) {
		int count = 0;
		int i = 0;
		int j = 0;
		int nav = 0;

		while (i < source.length) {
			nav = i;
			j = 0;
			while (nav < source.length && j < sub.length
					&& source[nav++] == sub[j++])
				;
			if (j == sub.length) {
				count++;
				i = nav;
			}
			i++;
		}
		return count;
	}

	static char[] delete_sub_str_method(char[] str, char[] sub_str) {
		char[] result_str = new char[str.length - sub_str.length];
		int i = 0;
		int j = 0;
		int index = 0, nav = 0;

		while (i < str.length) {
			nav = i;
			j = 0;
			while (nav < str.length && j < sub_str.length
					&& str[nav++] == sub_str[j++])
				;
			if (j == sub_str.length) {
				i = nav;
			} else {
				while (i < nav) {
					result_str[index++] = str[i++];
				}
			}
			while (i < str.length && str[i] != sub_str[0])
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
