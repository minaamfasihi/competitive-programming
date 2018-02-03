# @param {String} s
# @return {Boolean}
def is_valid(s)
    return true if s.length == 0
    return false if s.length.odd?

    parens = {
    '(' => ')',
    '[' => ']',
    '{' => '}',
    }

    stack = []
    i = 0

    s.chars.each do |paren|
        stack.push paren if parens.keys.include? paren
        if parens.values.include? paren
          return false if parens.key(paren) != stack.pop
        end
    end

    stack.empty?
end
