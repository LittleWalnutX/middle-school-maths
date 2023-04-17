pkgname=sxtools
pkgver=0.1.1
pkgrel="1"
pkgdesc="Maths"
arch=("any")
depends=()
license=("custom")
source=("zysfj.c" "echs.c" "echsjxs.c" "jfc.c" "jfcd.c" "jfcz.c" "ychsjxs.c" "yf.c" "zhishu.c")
sha512sums=("SKIP" "SKIP" "SKIP" "SKIP" "SKIP" "SKIP" "SKIP" "SKIP" "SKIP")

package() {
	mkdir -p ${pkgdir}/usr/bin
	gcc -s ${srcdir}/echs.c -o ${pkgdir}/usr/bin/echs
	gcc -s ${srcdir}/echsjxs.c -o ${pkgdir}/usr/bin/echsjxs
	gcc -s ${srcdir}/jfc.c -o ${pkgdir}/usr/bin/jfc -lm
	gcc -s ${srcdir}/jfcd.c -o ${pkgdir}/usr/bin/jfcd -lm
	gcc -s ${srcdir}/jfcz.c -o ${pkgdir}/usr/bin/jfcz
	gcc -s ${srcdir}/ychsjxs.c -o ${pkgdir}/usr/bin/ychsjxs
	ln -P ${pkgdir}/usr/bin/ychsjxs ${pkgdir}/usr/bin/zx 
	gcc -s ${srcdir}/yf.c -o ${pkgdir}/usr/bin/yf
	gcc -s ${srcdir}/zhishu.c -o ${pkgdir}/usr/bin/zhishu -lm
	gcc -s ${srcdir}/zysfj.c -o ${pkgdir}/usr/bin/zysfj
}

