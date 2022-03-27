## 

```cs

```

## 21、CSS动画

### transform

```css
/* 旋转  deg指的是角度 */
/* transform: rotate(45deg); */
/* 缩放 */
/* transform: scale(1.5); */
/* 偏移 */
/* transform: translate(100px,100px); */
transform: rotate(45deg) scale(1.5) translate(200px,100px);
```

### 动画

```css
.box1 {
            width: 100px;
            height: 100px;
            background-color: red;
            animation: myAnimate 1s linear 0s infinite;
        }

        /* 声明一个动画 */
        @keyframes myAnimate {
            0% {
                transform: translate(0, 0);
            }

            25% {
                transform: translate(300px, 0);
            }

            50% {
                transform: translate(300px, 300px);
            }

            75% {
                transform: translate(0, 300px);
            }

            100% {
                transform: translate(0, 0);
            }
        }
```

## 22、过渡属性

```css
transition: all 1s;
```

## 23、calc函数

用于计算宽度或者高度

格式：calc(宽度1 - 宽度2)

符号两边的空格必须有

## 24、清除浮动

```css
1、父元素加overflow:hidden;
2、受到影响的元素加 clear: both;
3、.box1::after {
   	content: '';
    display: block;
    clear: both;
}
```

## 25、媒体查询

```css
        @media screen and (max-width:768px) {
            div{
                width: 50%;
            }
        }
```

## 26、flex

