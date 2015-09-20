有的时候我们想一个label的text中出现不同的颜色，而且label出现的地方也很多。
以下是我自己写的：
<pre><code>
@implementation UILabel(MoreColorsText)
-(void)setAttributeLabelWithtextColorPairs:(NSArray*)colorTextPairs
{
    //获取Label的带属性字符串
    NSMutableAttributedString *attrStr = [[NSMutableAttributedString alloc] initWithAttributedString:self.attributedText];
    
    
    NSString *text = self.text;
    NSRange oriRange = NSMakeRange(0, 0), changedRange = NSMakeRange(0, 0);
    for (NSDictionary *textColorDic in colorTextPairs) {
        //计算要修改的textRange
        NSRange textRange = [text rangeOfString:textColorDic.allKeys.firstObject];
        NSUInteger location = (oriRange.location + oriRange.length) + textRange.location;
        changedRange = NSMakeRange(location, textRange.length);
        //修改指定范围的textColor
        UIColor *curColor = nil;
        if ([textColorDic.allValues.firstObject isKindOfClass:[UIColor class]]) {
            curColor = textColorDic.allValues.firstObject;
        }else{
            curColor = [UIColor colorWithHexString:textColorDic.allValues.firstObject];
        }
        [attrStr addAttribute:NSForegroundColorAttributeName value:curColor range:changedRange];
        //将修改的range改为旧的Range
        oriRange = changedRange;
        //从匹配字符串的结尾开始截取剩下的字符串
        if (textRange.location != NSNotFound &&
            self.text.length > (textRange.location + textRange.length)) {
            text = [text substringFromIndex:textRange.location + textRange.length];
        }
        
    }
    
    //将修改好的AttributedString赋值给Label
    
    self.attributedText = attrStr;
}
@end
</code></pre>

使用方法：
<pre>
//label的默认text=@"123456789"
[self.label setAttributeLabelWithtextColorPairs:@[@{@"2":@"FF7200"},
@{@"7":[UIColor redColor]}]];
</pre>

![屏幕快照 2015-09-20 下午12.54.27.png](http://upload-images.jianshu.io/upload_images/317394-8f290e6bf75816b1.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)