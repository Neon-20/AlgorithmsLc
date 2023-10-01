impl Solution {
    pub fn reverse_words(s: String) -> String {
        let mut ans = Vec::new();
        for word in s.split_whitespace(){
            ans.push(word.chars().rev().collect::<String>());
        }
        ans.join(" ")
    }
}